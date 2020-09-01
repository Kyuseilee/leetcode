#
# @lc app=leetcode.cn id=1114 lang=python3
#
# [1114] 按序打印
#
# @lc code=start
class Foo:
    def __init__(self):
        self.firstJobDone = threading.Lock()
        self.secondJobDone = threading.Lock()
        self.firstJobDone.acquire()
        self.secondJobDone.acquire()

    def first(self, printFirst: 'Callable[[], None]') -> None:
        
        # printFirst() outputs "first". Do not change or remove this line.
        printFirst()
        self.firstJobDone.release()


    def second(self, printSecond: 'Callable[[], None]') -> None:
        
        self.firstJobDone.acquire()
        # printSecond() outputs "second". Do not change or remove this line.
        printSecond()
        self.secondJobDone.release()


    def third(self, printThird: 'Callable[[], None]') -> None:
        self.secondJobDone.acquire()
        
        # printThird() outputs "third". Do not change or remove this line.
        printThird()
        self.thirdJobDone.release()
# @lc code=end

