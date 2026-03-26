# Partitioning (2)

Partitioning is a `technique` where we `split` the `memory map` in equal/ not equal parts!

1) Fixed Partitioning
2) Dynamic Partitioning

## 1 Fixed Partitioning

![fixed-partitioning](fixed-partitioning.png)

### Issues

> [!NOTE]
> **outdated**
>
> issues:
> 1) Fragmentation
> 2) Overlay
> 3) Input queue => prevent overlay

<!-- tabs:start -->
#### **Fragmentation**

> [!NOTE]
> cause fragmentation because process data needs to be split to fit the partitions

![fragmentation](fragmentation.png)

#### **Overlay**

code does not fit in a single partition => we use and overlay driver.

> [!WARNING] 
> allot of extra code is needed to solve this issue => not efficient

![overlay](overlay.png)

#### **Input Queue**

we use an input queue to solve the overlay issue. this way we don't have the overhead of the overlay driver.
<!-- tabs:start -->

##### **Multiple Queues**

![multi-queue](multi-queue.png)

##### **Single Queue**

![single-queue](single-queue.png)
<!-- tabs:end -->

<!-- tabs:end -->

## 2 Dynamic Partitioning

Make the `partition` fit the `required size`

### All is well (initially)

![dynamic-partitioning](dynamic-partitioning.png)

### Merging sequential partitions

![merging-partitions](merging-partitions.png)

### Housekeeping

> [!WARNING]
> Very expensive resource wise!

![moving-memory](moving-memory.png)


## 3 Allocation Strategies (3)

> [!NOTE]
> `First fit` is the most `performant`, and the `easiest` to implement

1) First fit
2) Best Fit 
3) Next Fit

