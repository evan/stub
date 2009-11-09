
require "#{File.dirname(__FILE__)}/test_helper"

class StubTest < Test::Unit::TestCase
  def test_stub
    assert Stub.stub
  end
end
