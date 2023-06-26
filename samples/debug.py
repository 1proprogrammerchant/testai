def debug_bot(bot):
  """
  Debugs an AI bot by printing out the steps it takes to generate a response.

  Args:
    bot: The AI bot to debug.
  """

  print("Starting debug...")
  bot.enable_debug()
  message = "Hello, world!"
  response = bot.generate_response(message)
  print("Received message: " + message)
  print("Generated response: " + response)
  print("Ending debug.")

if __name__ == "__main__":
  bot = Bard()
  debug_bot(bot)
