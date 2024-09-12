# Introduction to RabbitMQ 🚀

RabbitMQ is an open-source distributed message broker that operates similarly to a post office in the cloud. Developed in 2007 and written in Erlang, RabbitMQ is renowned for its role in the Open Telecom Platform (OTP). Originally, applications were built as monoliths with all concerns coupled together in a single runtime. However, this approach faced scalability challenges as different components had varying computational needs. This led to the rise of microservices architecture, where each concern operates independently, scaling as needed.

## RabbitMQ Overview 🌟

RabbitMQ facilitates communication between microservices asynchronously using various protocols. For example, consider an app that applies deep learning photo filters. When a user clicks a button, the request is sent to a REST API. Instead of processing the image directly, the API produces a message containing the necessary data and publishes it to an exchange. The exchange is responsible for routing the message to one or more queues, using bindings and routing keys.

## How It Works 🛠️

1. **Message Queuing** 📥:
   - The message sits in the queue until processed by a consumer, such as an image processing server.
   - Exchanges can route messages directly to specific queues, multiple queues with shared patterns (topics), or all known queues (fanout).

2. **Communication Patterns** 💬:
   - **Direct Exchange**: Routes messages to specific queues.
   - **Topic Exchange**: Routes messages based on routing keys, allowing for more flexible routing.
   - **Fanout Exchange**: Routes messages to all bound queues.

## Getting Started 🚦

1. **Installation** 🔧:
   - Install RabbitMQ or run it in a Docker container on port `5672`. It also includes a CLI tool for managing and inspecting your broker.

2. **Creating a Publisher** 📝:
   - Create a file in your preferred server-side language.
   - Use a library implementing the Advanced Message Queuing Protocol (AMQP) 0.9.1.
   - Connect to RabbitMQ, create a channel, and declare a queue (durable or transient).
   - Send a message buffer to the queue.

3. **Creating a Consumer** 📬:
   - Create another file to receive messages.
   - Connect to RabbitMQ and reference the same queue name.
   - Use the consume method to receive messages and process them with a callback function.

## Advanced Usage 🚀

To manage multiple queues simultaneously:
- Create an exchange (e.g., fanout or topic) to enable multiple servers to subscribe to and process the same messages at different times.

## Conclusion 👍

This overview introduces you to the basics of RabbitMQ and its capabilities. For more detailed information or tutorials, stay tuned for additional content.

---



# RabbitMQ Concepts and Code Examples

## RabbitMQ Concepts

### **1. Channel**

- **Definition**: A channel is a virtual connection within a RabbitMQ connection. All RabbitMQ operations occur over a channel.
- **Purpose**: Channels are used to perform tasks like declaring exchanges, queues, and publishing/consuming messages.
- **Types**:
  - **Blocking Channel**: A channel where operations are blocking, meaning the program waits for an operation to complete before proceeding. Suitable for simple use cases.
  - **Non-Blocking (Normal) Channel**: Channels used in asynchronous or threaded environments, allowing other operations to proceed while waiting for responses.

### **2. Exchange**

- **Definition**: An exchange routes messages to one or more queues based on routing rules.
- **Types**:
  - **Direct Exchange**: Routes messages with a specific routing key.
  - **Topic Exchange**: Routes messages to queues based on wildcard matching of routing keys.
  - **Fanout Exchange**: Routes messages to all bound queues.
  - **Headers Exchange**: Routes messages based on message header attributes.

### **3. Queue**

- **Definition**: A queue stores messages until they are consumed by a consumer.
- **Characteristics**:
  - **Durable**: A durable queue survives server restarts and is maintained until deleted.
  - **Exclusive**: An exclusive queue is used only by the connection that declares it and is deleted when the connection closes.
  - **Auto-Delete**: An auto-delete queue is deleted when the last consumer unsubscribes.

### **4. Routing Key**

- **Definition**: A routing key is used to route messages to specific queues. It’s a string that acts as a filter or identifier.

## Code Examples

### **Publishing Messages**

To publish messages, you need to declare the exchange and queue, bind them, and then publish the message.

```python
import pika

def publish_mq(exchange: str, routing_key: str, message: str, host: str = 'localhost', user: str = 'user', password: str = 'password'):
    credentials = pika.PlainCredentials(user, password)
    connection = pika.BlockingConnection(pika.ConnectionParameters(host=host, credentials=credentials))
    channel = connection.channel()

    # Declare exchange and queue
    channel.exchange_declare(exchange=exchange, exchange_type='topic', durable=True)
    channel.queue_declare(queue=routing_key, durable=True)
    channel.queue_bind(exchange=exchange, queue=routing_key, routing_key=routing_key)

    # Publish message
    channel.basic_publish(exchange=exchange, routing_key=routing_key, body=message)
    print(f"Published message: {message} to {routing_key}")

    connection.close()
```

### **Consuming Messages**

To consume messages, declare the queue and set up a callback function to process messages.

```python
import pika

def consume_mq(queue: str, host: str = 'localhost', user: str = 'user', password: str = 'password'):
    def callback(ch, method, properties, body):
        print(f"Received message: {body}")

    credentials = pika.PlainCredentials(user, password)
    connection = pika.BlockingConnection(pika.ConnectionParameters(host=host, credentials=credentials))
    channel = connection.channel()

    # Declare queue
    channel.queue_declare(queue=queue, durable=True)

    # Consume messages
    channel.basic_consume(queue=queue, on_message_callback=callback, auto_ack=True)
    print('Waiting for messages. To exit press CTRL+C')
    channel.start_consuming()
```

### **Blocking Channel vs. Normal Channel**

- **Blocking Channel**: 
  - Blocks the execution until the operation is complete. 
  - Suitable for simpler, synchronous tasks.
  - Example: `channel.start_consuming()` will block until stopped.

- **Non-Blocking (Normal) Channel**:
  - Used in asynchronous environments where operations can run concurrently.
  - Suitable for more complex scenarios requiring multiple threads or asynchronous handling.

## Summary

- **Channel**: A virtual connection within a RabbitMQ connection used for all operations.
- **Exchange**: Routes messages to queues based on routing keys or other criteria.
- **Queue**: Stores messages until consumed.
- **Routing Key**: A string used to route messages to queues.

By using the provided functions, you can publish and consume messages with minimal setup. For continuous operation, you might want to keep the connection open, rather than connecting and disconnecting for each message. This approach is more efficient for real-time systems.
