input_id=input("아이디를 입력해주세요")


def login(id):
  members = ['egoing', 'k8805', 'leezche']
  for member in members :
      if member == id:
        return True
  return False

if login(input_id):
    print('hello!'+input_id)
else:
    print("who are you")
