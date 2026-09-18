from openai import OpenAI


class ChatService:

    def __init__(self):
        self.client = OpenAI()

    def chat(self, message: str) -> str:
        response = self.client.responses.create(
            model="gpt-5.4-mini",
            input=message
        )
        return response.output_text