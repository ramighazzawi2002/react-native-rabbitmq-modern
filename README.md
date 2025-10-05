# 🐇 react-native-rabbitmq-modern

**A modern revamp of `react-native-rabbitmq` — built to work seamlessly with the latest React Native and Expo versions.**
Connect your React Native apps to RabbitMQ with an easy-to-use, reliable, and future-proof library.

---

## ✨ Overview

`react-native-rabbitmq-modern` brings back full RabbitMQ support for modern React Native and Expo projects.
The original `react-native-rabbitmq` library hasn’t been updated for recent RN/Expo versions — so this library was rebuilt and patched to make it **work out of the box** with today’s mobile environments.

If you’ve been struggling to integrate RabbitMQ with your mobile app… this library is for you 🚀

---

## 📦 Installation

```bash
npm install react-native-rabbitmq-modern --save
```

---

## 🚀 Usage Example

```js
import { Connection, Exchange, Queue } from "react-native-rabbitmq-modern";

const config = {
  host: "your-rabbitmq-host",
  port: 5672,
  username: "user",
  password: "password",
  virtualhost: "vhost",
  ttl: 10000, // Message time to live
  ssl: true, // Set to true if using SSL (use port 5671)
};

const connection = new Connection(config);

connection.on("error", (err) => {
  console.log("Connection error:", err);
});

connection.on("connected", () => {
  console.log("Connected to RabbitMQ!");

  const queue = new Queue(connection, {
    name: "queue_name",
    passive: false,
    durable: true,
    exclusive: false,
    consumer_arguments: { "x-priority": 1 },
  });

  const exchange = new Exchange(connection, {
    name: "exchange_name",
    type: "direct",
    durable: true,
    autoDelete: false,
    internal: false,
  });

  queue.bind(exchange, "queue_name");

  queue.on("message", (data) => {
    console.log("Received message:", data);
  });

  queue.on("messages", (data) => {
    console.log("Received multiple messages:", data);
  });

  const message = "Hello from React Native!";
  const routingKey = "";
  const properties = { expiration: 10000 };

  exchange.publish(message, routingKey, properties);
});
```

---

## 🤝 Contributing

This project is open to everyone who wants to help bring **RabbitMQ** to the **modern React Native ecosystem**.
If you’ve fixed a bug, improved performance, or added support for a new feature — please open a **Pull Request**.

Your help will make this library stronger and more stable for everyone 💪

---

## 🧑‍💻 Author

**Rami Ghazzawi**
Full Stack Developer | React Native Enthusiast
📧 Open to collaboration and community contributions

---

## 📜 License

MIT License © 2025 Rami Ghazzawi

---
