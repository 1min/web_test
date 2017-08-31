arr = [1,2,11,10,34]
arr.delete_if() do |item|
  item > 7
end
  puts arr
