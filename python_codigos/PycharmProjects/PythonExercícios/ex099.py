def maior(*num):
    print(f"Foram informados {len(num)} valores ao todo")
    if len(num) > 0: print(f"O maior valor encontrado foi o {max(num)}")



maior(1,2,3,4,5,6)
maior()