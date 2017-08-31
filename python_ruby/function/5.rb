# puts("아이디를 입력해주세요")
# input_id = gets.chomp()
# members = ['egoing', 'k8805', 'leezche']
# for member in members do
#     if member == input_id
#         puts('Hello!, '+member)
#         exit
#     end
# end
# puts('Who are you?')

puts("아이디를 입력해주세요")
input_id = gets.chomp()

def login(id)
  members = ['egoing', 'k8805', 'leezche']
  for member in members do
      if member == id
        return true
      end
  end
  return false
  end
if login(input_id)
 puts('hello!'+input_id)
else
  puts("who are you")
end
